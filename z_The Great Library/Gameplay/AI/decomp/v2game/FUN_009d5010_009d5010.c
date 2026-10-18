// FUN_009d5010 @ 009d5010 body=[[009d5010, 009d513c]]


/* WARNING: Removing unreachable block (ram,0x009d50b9) */

void FUN_009d5010(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  int *local_8;
  
  piVar6 = param_1;
  if (param_1 == param_2) {
    return;
  }
joined_r0x009d502f:
  while( true ) {
    local_8 = piVar6 + 2;
    if (local_8 == param_2) {
      return;
    }
    iVar2 = *local_8;
    iVar3 = piVar6[3];
    piVar1 = piVar6 + 3;
    if (iVar2 == *param_1) {
      cVar7 = FUN_0098ab20();
    }
    else {
      cVar7 = *param_1 < iVar2;
    }
    piVar6 = local_8;
    if (cVar7 == '\0') break;
    while (param_1 != local_8) {
      piVar1[-1] = piVar1[-3];
      *piVar1 = piVar1[-2];
      local_8 = piVar1 + -3;
      piVar1 = piVar1 + -2;
    }
    *param_1 = iVar2;
    param_1[1] = iVar3;
  }
  do {
    if (iVar2 == local_8[-2]) {
      uVar4 = *(uint *)(iVar3 + 0x18);
      uVar5 = *(uint *)(local_8[-1] + 0x18);
      uVar8 = uVar5;
      if (uVar4 <= uVar5) {
        uVar8 = uVar4;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar5 < uVar4) {
          bVar9 = true;
          goto LAB_009d5100;
        }
        uVar8 = (uint)(uVar5 != uVar4);
      }
      bVar9 = (int)uVar8 < 0;
    }
    else {
      bVar9 = local_8[-2] < iVar2;
    }
LAB_009d5100:
    if (!bVar9) break;
    *local_8 = local_8[-2];
    local_8[1] = local_8[-1];
    local_8 = local_8 + -2;
  } while( true );
  local_8[1] = iVar3;
  *local_8 = iVar2;
  goto joined_r0x009d502f;
}

