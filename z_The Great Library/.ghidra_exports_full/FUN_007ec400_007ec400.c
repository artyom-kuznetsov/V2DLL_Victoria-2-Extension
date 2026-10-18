// FUN_007ec400 @ 007ec400 body=[[007ec400, 007ec4bf]]


void FUN_007ec400(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_48 [17];
  
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[0x36]) {
    FUN_00408b00();
    D3DXMatrixMultiply(local_48,param_2 + 0x15,param_1);
    pcVar1 = *(code **)(*param_2 + 0x144);
    piVar3 = local_48;
    piVar5 = param_2 + 0x25;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    (*pcVar1)(param_3);
    if (((((char)param_3 != '\0') &&
         (uVar2 = (**(code **)(*param_2 + 0x4c))(), (param_4 & uVar2) != 0)) &&
        (iVar4 = (**(code **)(*param_2 + 0x44))(), iVar4 != 0)) && ((char)param_5 != '\0')) {
      piVar3 = (int *)(**(code **)(*param_2 + 0x44))();
      (**(code **)(*piVar3 + 0x20))(param_2);
    }
    if (param_2[0x37] != 0) {
      FUN_007ec400(local_48,param_2[0x37],param_3,param_4,param_5);
    }
  }
  return;
}

