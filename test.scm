;;;
;;; Test ext.perlinnoise
;;;

(use gauche.test)

(test-start "ext.perlinnoise")
(use ext.perlinnoise)
(test-module 'ext.perlinnoise)

;; The following is a dummy test code.
;; Replace it for your tests.
(test* "test-gauche_perlinnoise" "gauche_perlinnoise is working"
       (test-gauche_perlinnoise))

;; epilogue
(test-end)





