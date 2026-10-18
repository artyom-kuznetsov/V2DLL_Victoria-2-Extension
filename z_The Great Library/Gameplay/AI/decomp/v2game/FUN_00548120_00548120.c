// FUN_00548120 @ 00548120 body=[[00548120, 0054815e]]


void FUN_00548120(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)FUN_0054a690(param_1);
  cVar1 = (**(code **)(*piVar2 + 4))();
  if (cVar1 != '\0') {
    *(undefined4 *)(in_ECX + 0x44) = 0;
    return;
  }
  *(int **)(in_ECX + 0x44) = piVar2;
  FUN_00549030();
  return;
}

