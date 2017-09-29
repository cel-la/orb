cls
cd ../src/generated-sources
java -classpath "../../build_bnf/javacc-7.0.0.jar" jjtree ../../build_bnf/orb.jjt
java -classpath "../../build_bnf/javacc-7.0.0.jar" jjdoc orb.jj
move /Y orb.html ../../build_bnf/orb-bnf.html
java -classpath "../../build_bnf/javacc-7.0.0.jar" javacc orb.jj
cd ../../build_bnf
