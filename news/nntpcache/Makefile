PORTNAME=	nntpcache
PORTVERSION=	3.0.2
PORTREVISION=	11
CATEGORIES=	news
MASTER_SITES=	http://www.xs4all.nl/~suelette/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	News caching/anti-spam/server-merging system

# Converted from NO_CDROM
LICENSE=	nttpcache
LICENSE_NAME=	nttpcache
LICENSE_TEXT=	Free for individuals and non-military, non-profit organisations only
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: jmp
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: jmp
BROKEN_aarch64=		fails to link: missing sbrk
BROKEN_mips64=		fails to build: qemu: uncaught target signal 11 (Segmentation fault) - core dumped
BROKEN_riscv64=		fails to link: missing sbrk

# This may be set interactively at install-time.  NNTPCache will
# cache news articles and related data in ${SPOOLDIR}/nntpcache.
SPOOLDIR?=	/var/spool

USES=		compiler:c11 gmake autoreconf shebangfix
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=${SPOOLDIR} \
		--program-transform-name=''

SHEBANG_FILES=	contrib/perlnewshound/newshound.pl

AUTHINFO_EXT=	authinfo_pam.ext
USE_RC_SUBR=	nntpcached

OPTIONS_DEFINE=	LDAP RADIUS SPAMPHOBIA DOCS
SPAMPHOBIA_DESC=	Spamphobia NoCeM support

RADIUS_CONFIGURE_WITH=	authinfo-radius
RADIUS_VARS=	AUTHINFO_EXT+=authinfo_radius.ext

LDAP_USE=	OPENLDAP=yes
LDAP_CONFIGURE_WITH=	authinfo-ldap
LDAP_CPPFLAGS=	-I${PREFIX}/include -I${LOCALBASE}/include
LDAP_LDFLAGS=	-L${PREFIX}/lib -L${LOCALBASE}/lib
LDAP_VARS=	AUTHINFO_EXT+=authinfo_ldap.ext

NNTPSPOOLDIR?=	${SPOOLDIR}/${PORTNAME}
PLIST_SUB+=	SPOOLDIR=${NNTPSPOOLDIR}
CPIO_CMD=	${CPIO} --quiet -pdum -R
PORTDOCS=	AUTHORS ChangeLog FAQ FAQ.html HACKING HTML \
		INSTALL LICENSING NEWS README README.INN VERSION

REVISEDATE=	20060903
SPAMPHOBIA_PATCH_SITES=	http://people.freebsd.org/~leeym/:SPAMPHOBIA
SPAMPHOBIA_PATCHFILES=	${DISTNAME}-spamphobia-${REVISEDATE}.diff.gz:SPAMPHOBIA

post-configure:
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} -C ${WRKSRC}/src ${AUTHINFO_EXT}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} "${PORTDOCS}" ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
