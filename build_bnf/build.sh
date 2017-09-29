#/bin/bash
clear
cd ../src/generated-sources
java -classpath "../../build_bnf/javacc-7.0.0.jar" jjtree ../../build_bnf/orb.jjt
java -classpath "../../build_bnf/javacc-7.0.0.jar" jjdoc orb.jj
mv -f orb.html ../../build_bnf/orb-bnf.html
java -classpath "../../build_bnf/javacc-7.0.0.jar" javacc orb.jj
rm orb.jj
cd ../../build_bnf
