from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

konversi = {
    'mm': 0.001,
    'cm': 0.01,
    'm': 1,
    'km': 1000,
    'in': 0.0254,
    'ft': 0.3048,
    'yd': 0.9144,
    'mi': 1609.344
}

def convert_distance(value, from_unit, to_unit):
    try:
        # Konversi ke meter dulu
        value_in_meters = value * konversi[from_unit]
        # Konversi dari meter ke satuan tujuan
        result = value_in_meters / konversi[to_unit]
        return round(result, 6)
    except:
        return None

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/convert', methods=['POST'])
def convert():
    data = request.get_json()
    value = float(data['value'])
    from_unit = data['from_unit']
    to_unit = data['to_unit']
    
    result = convert_distance(value, from_unit, to_unit)
    
    if result is not None:
        return jsonify({
            'success': True,
            'result': result,
            'message': f'{value} {from_unit} = {result} {to_unit}'
        })
    else:
        return jsonify({
            'success': False,
            'message': 'Terjadi kesalahan dalam konversi'
        })

if __name__ == '__main__':
    app.run(debug=True)