WORKDIR=$(HOME)
#---------------------------------------------
# rules of making *.a, DON'T change anytime !
.c.a:
	cc -O -c -I$(INCL) $<
	@ar rv $@ $*.o
	@rm $*.o
.SUFFIXES:.a	.c
#---------------------------------------------

LIBS	=	../lib/IsoEx.a
INCL	=	../incl

JOB	:	$(LIBS)(ConCode.o)	\
		$(LIBS)(IsoEx.o)
	@echo "[32m\t扩展ISO库编译完成.[37m"

$(LIBS)(ConCode.o)	:	$(INCL)/IsoEx.h
$(LIBS)(IsoEx.o)	:	$(INCL)/IsoEx.h

test	:	genIso
	@rm -f *.o
	@echo "[32m\t扩展ISO库 测试程序 编译完成.[37m"
genIso	:	IsoEx.c ConCode.c
	cc -I$(INCL) -D__TEST__ -o $@ IsoEx.c ConCode.c ../lib/mLog.a
clean:
	@rm ../lib/IsoEx.a
