cmake_minimum_required(VERSION 3.27)
project(Heroes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Heroes main.cpp
        Heroes/Hero.h
        Heroes/IMagician.h
        Heroes/IWarrior.h
        Heroes/Elf/Elf.h
        Heroes/Dwarf/Dwarf.h
        Heroes/Elf/ElfMagician.h
        Heroes/Dwarf/DwarfMagician.h
        Heroes/Elf/ElfWarrior.h
        Heroes/Dwarf/DwarfWarrior.h
        Factories/AbstractFactory.h
        Factories/MagicianFactory.h
        Factories/WarriorFactory.h
        Game.h
        Heroes/HeroTypes.h)
