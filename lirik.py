import time
import sys

def efek_mengetik(teks, delay=0.07):
    for karakter in teks:
        print(karakter, end='', flush=True)
        time.sleep(delay)
    print()

def you_are_enough_lyrics():
    # Judul lagu dengan efek mengetik lembut
    efek_mengetik("You Are Enough - Sleeping At Last")
    time.sleep(1.5)
    
    # Lirik lagu You Are Enough
    lirik = [
        "Just how you are,",
        "You are enough.",
        "",
        "Just how you are,",
        "You are enough,",
        "You are enough.",
        "",
        "These little whispers,",
        "They're adding up,",
        "Quietly, I'm learning,",
        "To lean in.",
        "",
        "Just how you are,",
        "You are enough,",
        "You are enough,",
        "You are enough.",
        "",
        "Let the stars fall down,",
        "And the oceans rise up,",
        "Just how you are,",
        "You are enough."
    ]
    
    for baris in lirik:
        if baris == "":  # Jeda lebih panjang untuk baris kosong
            time.sleep(0.8)
        else:
            efek_mengetik(baris)
            time.sleep(0.4)  # Jeda antar baris

# Jalankan lirik lagu
you_are_enough_lyrics()