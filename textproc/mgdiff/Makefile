# Created by: andreas@marvin.robin.de
# $FreeBSD$

PORTNAME=	mgdiff
PORTVERSION=	1.0
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	XCONTRIB/applications
DISTNAME=	${PORTNAME}

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Graphical front end to the UNIX diff command

LICENSE=	MIT

USES=		imake motif
USE_XORG=	ice sm x11 xext xmu xp xt

DESKTOP_ENTRIES=	"mgdiff" "GUI front end to the UNIX diff command" \
			"mgdiff-48x48" \
			"mgdiff" "GNOME;GTK;Motif;Development;System;" \
			false

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${FILESDIR}/mgdiff-48x48.xpm ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/mgdiff.x[bp]m ${STAGEDIR}${PREFIX}/share/pixmaps

.include <bsd.port.mk>
