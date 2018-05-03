base.dependency.dependency_if_deprecated.DependencyParser=cpp.msvc.parse_link_dependencies.LinkDependencyParser

base.dependency.module.linkdeps_if.ModuleLinkDepsSupply=base.dependency.module.otf_linkdeps.OnTheFlyModuleLinkDepsSupply

cpp.cpp_if.CppDataSupply=cpp.file_supply.FileCppDataSupplier

cpp.cpp_if.FileToModuleMapSupply=cpp.file_supply.FileFileToModuleMapSupply

cpp.header_linker_if.HeaderLinker=cpp.header_linker_default.DefaultHeaderLinker

cpp.incl_deps.include_link_lifter_if.ModuleLinks=cpp.incl_deps.include_link_lifter_util.ModuleLinksImpl

cpp.incl_deps.include_link_lifter_if.IncludeLinkLifter=cpp.incl_deps.include_link_lifter_default.DefaultIncludeLinkLifter

cpp.incl_deps.include_deps_if.FileIncludeDepsSupply=cpp.incl_deps.file_include_deps.FileFileIncludeDepsSupply

# cpp.incl_deps.include_deps_if.IncludeDependencyGenerator=cpp.idep.threaded_cdep_include_deps.ThreadedCdepIncludeDependencyGenerator
cpp.incl_deps.include_deps_if.IncludeDependencyGenerator=cpp.idep.dirwise_cdep_include_deps.DirwiseCdepIncludeDependencyGenerator
# cpp.incl_deps.include_deps_if.IncludeDependencyGenerator=cpp.idep.cdep_include_deps.CdepIncludeDependencyGenerator

cpp.incl_deps.include_deps_if.ModuleIncludeDepsSupply=cpp.incl_deps.file_include_deps.FileModuleIncludeDepsSupply
# cpp.incl_deps.include_deps_if.ModuleIncludeDepsSupply=cpp.incl_deps.otf_include_deps.OnTheFlyModuleIncludeDepsSupply

cpp.incl_deps.include_list_generator.HeaderCanonicalSorter=cpp.incl_deps.include_list_generator.StandardGroupCanonicalSorter

cpp.incl_deps.include_list_generator.HeaderPathMapper=cpp.incl_deps.include_list_generator_wrap.DefaultHeaderPathMapper

# cpp.incl_deps.include_list_generator.IncludeListGeneratorConfig=???

cpp.incl_deps.repair_includes_if.FileNormalizer=cpp.incl_deps.repair_includes_base.BaseFileNormalizer

# cpp.incl_deps.repair_includes_if.UsedSymbolsLister=cpp.incl_deps.repair_includes_base.DefaultUsedSymbolsLister

cpp.msvc.msvc_supply_if.MSVCDataSupply=cpp.msvc.file_supply.FileMSVCDataSupply

base.modules_if.ModuleListSupply=cpp.msvc.file_supply.FileMSVCDataSupply

epm.epm_mapper_if.PhysicalToLogicalMapper=epm.cpp.mapper.CppPhysicalToLogicalMapper

cpp.cpp_if.CppFileConfiguration=cpp.cpp_default.DefaultCppFileConfiguration

epm.epm_physical_if.PhysicalModuleDescriber=epm.cpp.mapper.CppPhysicalModuleDescriber

cpp.incl_deps.include_rule_checker_if.IncludeRulesFactory=cpp.incl_deps.include_rule_checker_if.NullIncludeRulesFactory
