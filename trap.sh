set -x
trap 'echo "cntlc is disabled"' SIGINT
while false
do
   echo "running"
   sleep 2
done


trap 'echo "cleanup";rm -f /tmp/testabc.log' EXIT
touch /tmp/testabc.log
sleep 5
ls /tmp/testabc.log

