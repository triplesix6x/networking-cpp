#include <iostream>

#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

int main()
{
	asio::error_code ec;
	asio::io_context context;

	asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.34", ec), 80);

	asio::ip::tcp::socket socket(context);

	socket.connect(endpoint, ec);
	
	if (!ec)
	{
		std::cout << "Connected!\n";
	}
	else
	{
		std::cout << "Failed to connect:\n" << ec.message() << "\n";
	}
	//TODO: everything xD
    return 0;
}
