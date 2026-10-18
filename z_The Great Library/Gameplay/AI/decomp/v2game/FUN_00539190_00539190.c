// FUN_00539190 @ 00539190 body=[[00539190, 00539225]]


int FUN_00539190(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int local_8;
  
  local_8 = FUN_005dba20();
  piVar5 = *(int **)(param_1 + 0x9d8);
  while ((*(int **)(param_1 + 0x9d8) <= piVar5 && (piVar5 < *(int **)(param_1 + 0x9dc)))) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4);
    piVar5 = piVar5 + 1;
    if ((*(int *)(iVar1 + 0x110) == 0) && (*(int *)(iVar1 + 0xe0) != 0)) {
      piVar2 = *(int **)(iVar1 + 0xd8);
      while (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar4 = (**(code **)(*piVar3 + 0x34))();
        if ((cVar4 != '\0') && (*(char *)(piVar3[0x22] + 0x39) == '\0')) {
          local_8 = local_8 + 1;
        }
      }
    }
  }
  return local_8;
}

