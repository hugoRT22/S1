all: clean os.iso runqemu

os.iso: 
	cd ../xv6-public/ && $(MAKE) kernelmemfs
	cp -v ../xv6-public/kernelmemfs iso/boot/kernel.elf
	genisoimage -R				\
                    -b boot/grub/stage2_eltorito\
                    -no-emul-boot               \
                    -boot-load-size 4           \
                    -A os                       \
                    -input-charset utf8         \
                    -quiet                      \
                    -boot-info-table            \
                    -o os.iso                   \
                    iso

run: os.iso
	bochs -f bochsrc.txt -q

runqemu: os.iso
	qemu-system-i386 -cdrom os.iso -m 256

clean:
#	rm -rfv *.o kernel.elf os.iso
	rm -rfv os.iso
