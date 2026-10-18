// FUN_00ae0270 @ 00ae0270 body=[[00ae0270, 00ae02c9] [00ae02d0, 00ae05b0]]


void FUN_00ae0270(int param_1,float param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *in_ECX;
  int iVar9;
  uint uVar10;
  uint local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined1 local_1e4 [16];
  undefined1 local_1d4 [20];
  float local_1c0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined1 local_17c [16];
  undefined1 local_16c [16];
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 local_140 [64];
  undefined1 local_100 [64];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (0.001 < param_2) {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 400);
    iVar3 = *(int *)(param_1 + 0xc);
    bVar6 = false;
    local_208 = 0;
    if (uVar2 != 0) {
      do {
        uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + local_208 * 2);
        if (*(char *)(uVar10 + *param_3) != '\0') {
          if (0.999 <= param_2) {
            FID_conflict__memcpy
                      ((void *)(uVar10 * 0x40 + iVar3),(void *)(*in_ECX + uVar10 * 0x40),0x40);
          }
          else {
            iVar9 = uVar10 * 0x40;
            FID_conflict__memcpy(local_140,(void *)(iVar9 + iVar3),0x40);
            iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0x80) + uVar10 * 4) + 4);
            if (iVar4 != -1) {
              FID_conflict__memcpy(local_c0,(void *)(iVar4 * 0x40 + iVar3),0x40);
              FUN_00ad29c0();
              pvVar7 = (void *)FUN_00ad83e0(local_80,local_c0);
              FID_conflict__memcpy(local_140,pvVar7,0x40);
            }
            FUN_00b185c0(local_140);
            FID_conflict__memcpy(local_100,(void *)(*in_ECX + iVar9),0x40);
            if (iVar4 != -1) {
              FID_conflict__memcpy(local_40,(void *)(iVar4 * 0x40 + *in_ECX),0x40);
              FUN_00ad29c0();
              pvVar7 = (void *)FUN_00ad83e0(local_80,local_40);
              FID_conflict__memcpy(local_100,pvVar7,0x40);
            }
            FUN_00b185c0(local_100);
            fVar5 = 1.0 - param_2;
            local_1c0 = local_188 * fVar5;
            local_1fc = local_18c * fVar5 + local_150 * param_2;
            local_1f8 = local_1c0 + local_14c * param_2;
            local_1f4 = local_184 * fVar5 + local_148 * param_2;
            local_1f0 = local_198 * fVar5 + local_15c * param_2;
            local_1ec = local_194 * fVar5 + local_158 * param_2;
            local_1e8 = local_154 * param_2 + local_190 * fVar5;
            FUN_00adff20(local_1d4,local_17c,param_2);
            FUN_00adff20(local_1e4,local_16c,param_2);
            uVar8 = FUN_00aeb790(&local_1fc,local_1d4,&local_1f0,local_1e4);
            FUN_00ae1420(uVar10,uVar8);
            FUN_00acef90(uVar10,local_1e4,local_1d4,&local_1fc,&local_1f0,iVar9 + iVar1);
            bVar6 = true;
          }
        }
        local_208 = local_208 + 1;
      } while (local_208 < uVar2);
      if (bVar6) {
        FUN_00ace4b0();
      }
    }
  }
  return;
}

