PORTNAME=	patchutils
PORTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://cyberelk.net/tim/data/patchutils/stable/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Small collection of programs that operate on patch files

LICENSE=	GPLv2+

RUN_DEPENDS=	bash:shells/bash

USES=		perl5 python:run shebangfix tar:xz

SHEBANG_FILES=	patchview/gitdiff scripts/*.in

GNU_CONFIGURE=	yes

post-install:
	${MV} ${STAGEDIR}${PREFIX}/bin/svndiff ${STAGEDIR}${PREFIX}/bin/svndiff.patchutils
	${INSTALL_MAN} ${WRKSRC}/doc/*.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
