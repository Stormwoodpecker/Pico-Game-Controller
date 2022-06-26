add_executable(Pico_Game_Controller
        pico_game_controller.c
        usb_descriptors.c)

target_include_directories(Pico_Game_Controller PRIVATE ${CMAKE_CURRENT_LIST_DIR})

target_sources(Pico_Game_Controller PRIVATE pico_game_controller.c)

target_link_libraries(Pico_Game_Controller PRIVATE
        pico_stdlib
        tinyusb_device
        tinyusb_board
        hardware_irq)

pico_add_extra_outputs(Pico_Game_Controller)
