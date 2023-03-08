
includes("toolchains/*.lua")

add_rules("mode.debug", "mode.release")

target("kernel-mom")
    add_files("src/*.c")
    -- add_includedirs("include")
    -- if is_plat("gcc") then
        set_toolchains("arm-none-eabi")
        set_extension(".elf")
        set_arch("cortex-m4")
        add_cflags("-fPIC -fPIE -mno-pic-data-is-text-relative");
        add_links("nosys");
        add_ldflags(' -T link.lds')
    -- end
