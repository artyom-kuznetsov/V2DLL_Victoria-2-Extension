// FUN_006cd210 @ 006cd210 body=[[006cd210, 006cd2cd]]


void FUN_006cd210(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_006bee40(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_006bee40(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = FUN_006bee40(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

