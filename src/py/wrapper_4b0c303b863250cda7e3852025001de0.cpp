#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_4b0c303b863250cda7e3852025001de0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_9a6e78d77fe95ed5bf25634e99bc0ec2)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_06d138b6876c5c16bb4a68b3e7c687ac)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_506d4c19618751a38b7345e23009f737)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_6833c5c3fde45a8aa21edd4911d29707)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_9a6e78d77fe95ed5bf25634e99bc0ec2, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_06d138b6876c5c16bb4a68b3e7c687ac, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_506d4c19618751a38b7345e23009f737, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_6833c5c3fde45a8aa21edd4911d29707, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}