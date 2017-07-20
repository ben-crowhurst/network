//System Includes
#include <string>
#include <memory>
#include <system_error>

//Project Includes
#include "corvusoft/network/tcpip_adaptor.hpp"

//External Includes
#include <catch.hpp>
#include <corvusoft/core/byte.hpp>
#include <corvusoft/core/run_loop.hpp>

//System Namespaces
using std::string;
using std::error_code;
using std::shared_ptr;

//Project Namespaces
using corvusoft::network::TCPIPAdaptor;

//External Namespaces
using corvusoft::core::Bytes;

TEST_CASE( "Create" )
{
    REQUIRE_NOTHROW( TCPIPAdaptor::create( ) );
    
    auto adaptor = TCPIPAdaptor::create( );
    REQUIRE( adaptor->get_name( ) == "TCPIP" );
    
    adaptor = TCPIPAdaptor::create( "Test Socket" );
    REQUIRE( adaptor->get_name( ) == "Test Socket" );
}
