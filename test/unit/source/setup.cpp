//System Includes
#include <memory>
#include <system_error>

//Project Includes
#include "corvusoft/network/tcpip_adaptor.hpp"

//External Includes
#include <catch.hpp>
#include <corvusoft/core/run_loop.hpp>
#include <corvusoft/core/settings.hpp>

//System Namespaces
using std::error_code;
using std::shared_ptr;
using std::make_shared;

//Project Namespaces
using corvusoft::network::TCPIPAdaptor;

//External Namespaces
using corvusoft::core::RunLoop;
using corvusoft::core::Settings;

TEST_CASE( "Setup" )
{
    auto adaptor = TCPIPAdaptor::create( );
    
    auto status = adaptor->setup( );
    REQUIRE( status == error_code( ) );
    
    const auto runloop = make_shared< RunLoop >( );
    status = adaptor->setup( runloop );
    REQUIRE( status == error_code( ) );
    
    const auto settings = make_shared< Settings >( );
    status = adaptor->setup( settings );
    REQUIRE( status == error_code( ) );
    
    status = adaptor->setup( runloop, settings );
    REQUIRE( status == error_code( ) );
    
    status = adaptor->setup( nullptr, nullptr );
    REQUIRE( status == error_code( ) );
}
