'''
Created on 08.09.2010

@author: SIGIESEC
'''
from configuration.revengtools_config import RevEngToolsConfigParser
from cpp.cpp_if import CppPaths
from configuration.config_base import RevEngToolsBasicConfig

class RevEngToolsCppPaths(CppPaths):
    def __init__(self):
        CppPaths.__init__(self)
        self.__adaptee = RevEngToolsConfigParser()

    def get_module_spec_basedir(self):
        return RevEngToolsBasicConfig.get_path(self.__adaptee, "PROJECTFILEBASEDIR")

    def get_solution_file(self):
        return RevEngToolsBasicConfig.get_path(self.__adaptee, "SOLUTIONFILE")

