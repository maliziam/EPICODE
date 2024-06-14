#!/usr/bin/env python3

import socket

def start_udp_server(SRVADDR, SRVPORT):
    # Creazione del socket UDP
    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    udp_socket.bind((SRV_ADDR, SRV_PORT))
    print(f"Server UDP in ascolto su {SRV_ADDR}:{SRV_PORT}")

    while True:
        # Ricezione dei dati dal client
        data, client_address = udp_socket.recvfrom(1024)
        print(f"Messaggio ricevuto da {client_address}: {data}")

        # Invia una risposta di conferma al client
        response = "Messaggio ricevuto"
        udp_socket.sendto(response.encode('utf-8'), client_address)

if __name__== "__main__":
    SRV_ADDR = "10.0.2.15"  # Ascolta su tutte le interfacce di rete
    SRV_PORT = 44444      # Porta su cui il server ascolterà
    start_udp_server(SRV_ADDR, SRV_PORT)