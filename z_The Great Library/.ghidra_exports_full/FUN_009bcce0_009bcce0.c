// FUN_009bcce0 @ 009bcce0 body=[[009bcce0, 009bcd97]]


void FUN_009bcce0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_c;
  int local_8;
  
  iVar4 = param_1;
  iVar1 = param_1 + 0x6b6c4;
  param_1 = FUN_00462500(param_2);
  if (param_1 != *(int *)(iVar4 + 0x6b6c8)) {
    cVar5 = FUN_0098ab20();
    if (cVar5 == '\0') {
      piVar6 = &param_1;
      goto LAB_009bcd21;
    }
  }
  local_8 = *(int *)(iVar4 + 0x6b6c8);
  piVar6 = &local_8;
LAB_009bcd21:
  iVar7 = *(int *)(*piVar6 + 0x28) * 0x2c + iVar4;
  piVar6 = (int *)(iVar7 + 0x2c);
  *piVar6 = *piVar6 + -1;
  if (*piVar6 == 0) {
    iVar2 = *(int *)(iVar7 + 0x28);
    iVar3 = *(int *)(iVar7 + 0x24);
    *(int *)(iVar4 + 0x6b6d8) = *(int *)(iVar4 + 0x6b6d8) + -1;
    *(int *)(iVar4 + 0x6b6dc) = *(int *)(iVar4 + 0x6b6dc) + iVar2 * iVar3 * -4;
    piVar6 = *(int **)(iVar7 + 4);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_009bd890(iVar1,&local_c,param_2);
    FUN_00462440(local_c,local_8);
  }
  return;
}

