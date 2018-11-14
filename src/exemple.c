
pid_t pid;
switch( pid = fork() ) {
case -1:
  perror("fork:");
  break;
case 0:
  printf("Ahhh !!!!!\n");
  break;
default:
  {
    int status;
    printf("%d, je suis ton père\n", pid);
    waitpid(pid, &status, 0);
    break;
  }
}
