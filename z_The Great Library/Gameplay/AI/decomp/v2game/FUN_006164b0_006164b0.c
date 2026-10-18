// FUN_006164b0 @ 006164b0 body=[[006164b0, 006164dc]]


undefined4 FUN_006164b0(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x74) == 0) {
    return 1;
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x74) + 0x1c))();
  if ((cVar1 != '\0') && (cVar1 = FUN_00911760(0), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

