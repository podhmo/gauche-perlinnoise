;;;
;;; gauche_perlinnoise
;;;

(define-module ext.perlinnoise
  (export test-gauche_perlinnoise ;; dummy
          )
  )
(select-module ext.perlinnoise)

;; Loads extension
(dynamic-load "gauche_perlinnoise")

;;
;; Put your Scheme definitions here
;;

;; Epilogue
(provide "ext/perlinnoise")


