#include <iostream>
#include <vector>
#include <error-type>

std::atomic_bool QUIT = false;
//std::atomic_<bool> QUIT = false;

std::optional<std::string> getenv(const std::string name){
  getenv;
}

int netcp_listen() {
  //If command_mode
  //subprocess command(command_args, in)
  //else
  //Abrir archivo destino filename
  //source_adress = make_ip_adress(std::nullopt, port)
  //make_socket(source_address)

  while(!buffer.empty()) {
    receive_from(buffer);

    if (buffer.empty()) {
      break;
    }
    write_file(buffer);
  }
}

int netcp_sender() {
  //If command_mode
  //subprocess command(command_args, subprocess::stdio::out(-1) subprocess::stdio::err(-2) subprocess::stdio::outerr)
  //else {
  //abrir achivos de origen input_filename
  //}
  //make_socket()
  //remote_adress = make_ip_address(ip_adress, port)

  while(!buffer.empty()) {
    //read_file(buffer)
    //sendto(buffer)
  }
  //NOTA: Cerrar todo

  return EXIT_SUCCESS;
}

void signal_handler(int signum) {
  std::cout << QUIT = true; 
}

int main() {

  // Parsear la línea de comandos: "-h", "-l" "-filename" {program options}
  // Leer variables de entorno
  // port = existe "NETCP_PORT" ? getenv("NETCP_PORT") : 8080
  // ip_adress = existe "NETCP_IP" ? getenv("NETCP_IP") : 127.0.0.1 // ignora en el modo listen

  sigaction signal_action();
  signal_action.sa_handler = &signal_handler;
  sigaction( SIGHUP, &signal_action, NULL);
  sigaction( SITERM, &signal_action, NULL);
  sigaction( SIGINT, &signal_action, NULL);

  if (program_options.listen_mode) {
    return netcp_listen();
  } else {
    return netcp_sender():
  }
}