# Maintainer:

_pkgname=dwmblocks
pkgname=dwmblocks-gt-git
pkgver=1.0
pkgrel=1
pkgdesc="GT's build of dwmblocks"
url='https://github.com/ISs25u/dwmblocks-gt'
arch=('i686' 'x86_64')
license=('MIT')
depends=('libxft')
makedepends=('git')
source=('git://github.com/ISs25u/dwmblocks-gt')
sha1sums=('SKIP')
provides=("${_pkgname}")
conflicts=("${_pkgname}")

pkgver() {
	cd "${_pkgname}-gt"
	printf '%s' "$pkgver" 
}

build() {
	cd "${_pkgname}-gt"
	make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
	cd "${_pkgname}-gt"
	make PREFIX=/usr DESTDIR="${pkgdir}" install
	install -Dm644 LICENSE "${pkgdir}/usr/share/licenses/${pkgname}/LICENSE"
	install -Dm644 README.md "${pkgdir}/usr/share/doc/${pkgname}/README.md"
}
