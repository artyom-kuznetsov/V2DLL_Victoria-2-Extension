// FUN_009ec900 @ 009ec900 body=[[009ec900, 009ec91e] [009ec920, 009eca71]]


byte FUN_009ec900(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_EDX;
  float *pfVar8;
  float local_38 [6];
  undefined1 local_20 [12];
  undefined1 *local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 0;
  pfVar8 = (float *)(in_EDX + 0x294);
  while( true ) {
    fVar2 = pfVar8[-3];
    fVar3 = pfVar8[-2];
    fVar4 = pfVar8[-1];
    puVar6 = (undefined4 *)(param_1 + 0xc);
    iVar7 = -(int)puVar6;
    local_14 = local_20 + iVar7;
    iVar1 = (int)local_38 + iVar7 + 0xc;
    local_c = 3;
    do {
      if (*(float *)(local_14 + (int)puVar6) < 0.0) {
        *(undefined4 *)(iVar1 + (int)puVar6) = *puVar6;
        uVar5 = *(undefined4 *)(param_1 + iVar7 + (int)puVar6);
      }
      else {
        *(undefined4 *)(iVar1 + (int)puVar6) = *(undefined4 *)(param_1 + iVar7 + (int)puVar6);
        uVar5 = *puVar6;
      }
      *(undefined4 *)((int)local_38 + iVar7 + (int)puVar6) = uVar5;
      puVar6 = puVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (0.0 < local_38[4] * fVar3 + local_38[3] * fVar2 + local_38[5] * fVar4 + *pfVar8) break;
    if (0.0 <= local_38[1] * fVar3 + local_38[0] * fVar2 + local_38[2] * fVar4 + *pfVar8) {
      local_5 = '\x01';
    }
    local_10 = local_10 + 1;
    pfVar8 = pfVar8 + 4;
    if (5 < local_10) {
      return -(local_5 != '\0') & 2;
    }
  }
  return 1;
}

