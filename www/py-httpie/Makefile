# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD$

PORTNAME=	httpie
PORTVERSION=	0.9.9
CATEGORIES=	www
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Command line HTTP client

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.11.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=2.1.3:textproc/py-pygments@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	jakubroztocil

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
