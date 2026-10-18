// FUN_00aeb150 @ 00aeb150 body=[[00aeb150, 00aeb1f6]]


int FUN_00aeb150(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  undefined4 *puVar5;
  uint uVar6;
  int local_4;
  
  uVar6 = 0;
  local_4 = 0;
  if (in_ECX[1] == 0) {
    return 0;
  }
  do {
    piVar1 = *(int **)(*in_ECX + uVar6 * 4);
    iVar3 = (**(code **)(*piVar1 + 0x10))();
    if (iVar3 == param_1) {
      uVar2 = in_ECX[1];
      uVar4 = 0;
      if (uVar2 == 0) {
LAB_00aeb1cd:
        (**(code **)*piVar1)(1);
        local_4 = local_4 + 1;
      }
      else {
        puVar5 = (undefined4 *)*in_ECX;
        do {
          if ((int *)*puVar5 == piVar1) {
            if (uVar4 != 0xffffffff) {
              if ((1 < uVar2) && (iVar3 = (uVar2 - uVar4) + -1, iVar3 != 0)) {
                puVar5 = (undefined4 *)*in_ECX + uVar4;
                FID_conflict__memcpy(puVar5,puVar5 + 1,iVar3 * 4);
              }
              in_ECX[1] = in_ECX[1] + -1;
            }
            goto LAB_00aeb1cd;
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < uVar2);
        (**(code **)*piVar1)(1);
        local_4 = local_4 + 1;
      }
    }
    else {
      uVar6 = uVar6 + 1;
    }
    if ((uint)in_ECX[1] <= uVar6) {
      return local_4;
    }
  } while( true );
}

