str="PracProg"
for i in $(seq 0 $1); do
    echo ${str:$i:1}" "
done
