PORTNAME=	libocas
PORTVERSION=	0.96
CATEGORIES=	math
MASTER_SITES=	http://cmp.felk.cvut.cz/~xfrancv/ocas/ LOCAL/bf
DISTNAME=	${PORTNAME}_v${PORTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Efficient training of SVM classifiers

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake zip
USE_LDCONFIG=	yes

ALL_TARGET=	clean libocas.so.1 svmocas msvmocas linclassif
CLIBS=		-lm -lpthread
MAKE_ENV=	CLIBS="${CLIBS}" MEXDETECTED=no

PLIST_FILES=	bin/linclassif bin/msvmocas bin/svmocas lib/libocas.so \
		lib/libocas.so.1

.include <bsd.port.pre.mk>

.if ${ARCH} == sparc64
PICFLAG=	-fPIC
.else
PICFLAG=	-fpic
.endif

CFLAGS+=	${PICFLAG}

post-patch:
	@${REINPLACE_CMD} \
		-e '\|:=|d' \
		-e 's|libocas\.so|&.1|' \
		-e '\|$$(CC) $$(CFLAGS) -o|{s|$$(CFLAGS)|& ${LDFLAGS}|;}' \
		${WRKSRC}/Makefile

do-install:
.for p in linclassif msvmocas svmocas
	${INSTALL_PROGRAM} ${WRKSRC}/${p} ${STAGEDIR}${PREFIX}/bin
.endfor
	${INSTALL_LIB} ${WRKSRC}/libocas.so.1 ${STAGEDIR}${PREFIX}/lib
	@${LN} -sf libocas.so.1 ${STAGEDIR}${PREFIX}/lib/libocas.so

do-test:
	${WRKSRC}/msvmocas -c 10 -v 1 ${WRKSRC}/data/example4_train.light \
		${WRKSRC}/data/msvmocas.model
	${WRKSRC}/linclassif -e -v 1 -o ${WRKSRC}/data/example4_test.pred \
		${WRKSRC}/data/example4_test.light ${WRKSRC}/data/msvmocas.model
	${WRKSRC}/svmocas -c 10 -b 1 -v 1 ${WRKSRC}/data/riply_trn.light \
		${WRKSRC}/data/svmocas.model
	${WRKSRC}/linclassif -e -v 1 -o ${WRKSRC}/data/riply_tst.pred \
		${WRKSRC}/data/riply_tst.light ${WRKSRC}/data/svmocas.model

.include <bsd.port.post.mk>
