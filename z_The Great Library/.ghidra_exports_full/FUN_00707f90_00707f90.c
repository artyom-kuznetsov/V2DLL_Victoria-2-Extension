// FUN_00707f90 @ 00707f90 body=[[00707f90, 00708050]]


void FUN_00707f90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *local_8;
  
  if ((param_1 != param_2) && (puVar6 = param_1 + 1, puVar6 != param_2)) {
    do {
      uVar1 = *puVar6;
      cVar3 = FUN_006f39d0(&stack0x0000000c);
      if (cVar3 == '\0') {
        cVar3 = FUN_006f39d0(&stack0x0000000c);
        local_8 = puVar6;
        if (cVar3 != '\0') {
          uVar7 = puVar6[-1];
          puVar2 = puVar6 + -1;
          do {
            puVar5 = puVar2;
            *local_8 = uVar7;
            uVar7 = puVar5[-1];
            cVar3 = FUN_006f39d0(&stack0x0000000c);
            puVar2 = puVar5 + -1;
            local_8 = puVar5;
          } while (cVar3 != '\0');
        }
        *local_8 = uVar1;
      }
      else {
        iVar4 = (int)puVar6 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar6 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = uVar1;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != param_2);
  }
  return;
}

