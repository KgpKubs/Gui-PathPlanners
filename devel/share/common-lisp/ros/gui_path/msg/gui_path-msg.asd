
(cl:in-package :asdf)

(defsystem "gui_path-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "gui_to_main" :depends-on ("_package_gui_to_main"))
    (:file "_package_gui_to_main" :depends-on ("_package"))
    (:file "point_array" :depends-on ("_package_point_array"))
    (:file "_package_point_array" :depends-on ("_package"))
    (:file "point_SF" :depends-on ("_package_point_SF"))
    (:file "_package_point_SF" :depends-on ("_package"))
    (:file "path_point" :depends-on ("_package_path_point"))
    (:file "_package_path_point" :depends-on ("_package"))
  ))