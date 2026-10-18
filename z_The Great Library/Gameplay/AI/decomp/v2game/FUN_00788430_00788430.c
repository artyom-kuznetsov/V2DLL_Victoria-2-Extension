// FUN_00788430 @ 00788430 body=[[00788430, 007884d6]]


void FUN_00788430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar3 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      cVar4 = FUN_0077f5d0(&stack0x0000000c,*param_1);
      if (cVar4 == '\0') {
        cVar4 = FUN_0077f5d0(&stack0x0000000c,*puVar3);
        puVar3 = puVar2;
        while (cVar4 != '\0') {
          *puVar3 = puVar3[-1];
          cVar4 = FUN_0077f5d0(&stack0x0000000c,puVar3[-2]);
          puVar3 = puVar3 + -1;
        }
        *puVar3 = uVar1;
        puVar3 = puVar2;
      }
      else {
        iVar5 = (int)puVar2 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar2 + (1 - iVar5),param_1,iVar5 * 4);
        *param_1 = uVar1;
        puVar3 = puVar2;
      }
    }
  }
  return;
}

