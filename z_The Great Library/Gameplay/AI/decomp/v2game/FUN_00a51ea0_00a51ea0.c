// FUN_00a51ea0 @ 00a51ea0 body=[[00a51ea0, 00a523f4]]


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a51ea0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined2 in_FPUControlWord;
  undefined2 uVar9;
  int *piVar8;
  int *piVar10;
  undefined8 uVar11;
  char *pcStack_348;
  undefined4 **ppuStack_344;
  undefined1 **ppuStack_340;
  undefined1 **ppuStack_33c;
  int *piStack_338;
  char *pcStack_334;
  int iStack_330;
  int *piStack_32c;
  char *pcStack_328;
  int iStack_324;
  int *piStack_320;
  char *pcStack_31c;
  int iStack_318;
  int *piStack_314;
  undefined *puStack_310;
  undefined4 uStack_30c;
  int *piStack_308;
  undefined *puStack_304;
  undefined4 uStack_300;
  int *piStack_2fc;
  char *pcStack_2f8;
  undefined1 *puStack_2f4;
  int *piStack_2f0;
  char *pcStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2dc;
  int *piStack_2d8;
  char *pcStack_2d4;
  int **ppiStack_2d0;
  undefined1 *puStack_2cc;
  undefined8 *puStack_2c8;
  undefined1 *puStack_2c4;
  undefined4 *puStack_2c0;
  undefined4 *puStack_2bc;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined8 uStack_29c;
  int *piStack_294;
  undefined4 uStack_290;
  int *piStack_28c;
  undefined4 uStack_288;
  int *piStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_260;
  undefined1 auStack_220 [12];
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 auStack_208 [2];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [48];
  undefined4 auStack_1b0 [36];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [88];
  undefined1 auStack_a0 [156];
  
  piVar8 = *(int **)(*(int *)(param_1 + 0xe4) + 100);
  iVar4 = *(int *)(param_1 + 0x1cc) << 5;
  fVar1 = (float)iVar4;
  uStack_274 = 0x20;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uStack_27c = *(undefined4 *)(param_1 + 0x1c0);
  local_260 = (undefined4)(longlong)ROUND(fVar1 * *(float *)(param_1 + 0x1d4));
  uStack_278 = local_260;
  uStack_280 = 0;
  uStack_288 = 0xa51f19;
  piStack_284 = piVar8;
  (**(code **)(*piVar8 + 400))();
  uStack_288 = 0x112;
  uStack_290 = 0xa51f29;
  piStack_28c = piVar8;
  (**(code **)(*piVar8 + 0x164))();
  uStack_290 = *(undefined4 *)(param_1 + 0x1c4);
  uStack_29c = CONCAT44(0xa51f3b,(int *)uStack_29c);
  piStack_294 = piVar8;
  (**(code **)(*piVar8 + 0x1a0))();
  uStack_29c = 0x1b;
  uStack_2a4._0_4_ = 0xa51f4a;
  uStack_2a4._4_4_ = piVar8;
  (**(code **)(*piVar8 + 0xe4))();
  uStack_2ac._4_4_ = *(int **)(param_1 + 0x1dc);
  uStack_2a4 = CONCAT44(uStack_2a4._4_4_,"spec_color");
  uStack_2ac._0_4_ = (undefined8 *)0xa51f60;
  (**(code **)(*uStack_2ac._4_4_ + 0xe8))();
  puVar2 = (undefined4 *)(param_1 + 0x1e4);
  puVar7 = auStack_1b0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xe4) + 0x6bc88);
  uStack_29c = CONCAT44(uStack_29c._4_4_,iVar4 + 0x1c);
  uStack_2ac._0_4_ = (undefined8 *)0xa51f92;
  puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar4 + 0x1c) + 0x16c))();
  puVar6 = &uStack_1f0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
  }
  uStack_2ac._0_4_ = (undefined8 *)0xa51fb0;
  puVar2 = (undefined4 *)(**(code **)(*(int *)uStack_29c + 0x174))();
  puVar7 = &uStack_108;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_2ac._0_4_ = &uStack_1f0;
  uStack_2b4._4_4_ = auStack_1b0;
  uStack_2b4._0_4_ = &stack0xfffffd98;
  puStack_2b8 = (undefined1 *)0xa52048;
  D3DXMatrixMultiply();
  puStack_2b8 = auStack_114;
  puStack_2c0 = &uStack_274;
  puStack_2c4 = (undefined1 *)0xa5205a;
  puStack_2bc = puStack_2c0;
  D3DXMatrixMultiply();
  puStack_2c4 = auStack_120;
  puStack_2c8 = auStack_208;
  puStack_2cc = auStack_a0;
  ppiStack_2d0 = (int **)0xa52074;
  D3DXMatrixMultiply();
  piStack_2d8 = *(int **)(param_1 + 0x1dc);
  ppiStack_2d0 = &piStack_28c;
  pcStack_2d4 = "WorldViewProjectionMatrix";
  puStack_2dc = (undefined1 *)0xa5208f;
  (**(code **)(*piStack_2d8 + 0x98))();
  puStack_2dc = auStack_220;
  puStack_2e0 = auStack_1e0;
  puStack_2e4 = auStack_f8;
  puStack_2e8 = (undefined1 *)0xa520a9;
  D3DXMatrixMultiply();
  piStack_2f0 = *(int **)(param_1 + 0x1dc);
  puStack_2e8 = auStack_104;
  pcStack_2ec = "WorldViewMatrix";
  puStack_2f4 = (undefined1 *)0xa520c7;
  (**(code **)(*piStack_2f0 + 0x98))();
  piStack_2fc = *(int **)(param_1 + 0x1dc);
  puStack_2f4 = auStack_1f8;
  pcStack_2f8 = "WorldMatrix";
  uStack_300 = 0xa520e5;
  (**(code **)(*piStack_2fc + 0x98))();
  piStack_308 = *(int **)(param_1 + 0x1dc);
  uStack_300 = param_3;
  puStack_304 = &DAT_00e0bce4;
  uStack_30c = 0xa520ff;
  (**(code **)(*piStack_308 + 0xd0))();
  piStack_314 = *(int **)(param_1 + 0x1dc);
  uStack_30c = param_4;
  puStack_310 = &DAT_00e19384;
  iStack_318 = 0xa52119;
  (**(code **)(*piStack_314 + 0xd0))();
  piStack_320 = *(int **)(param_1 + 0x1dc);
  iStack_318 = param_2;
  pcStack_31c = "Color1";
  iStack_324 = 0xa52133;
  (**(code **)(*piStack_320 + 0x88))();
  piStack_32c = *(int **)(param_1 + 0x1dc);
  iStack_324 = param_2 + 0x10;
  pcStack_328 = "Color2";
  iStack_330 = 0xa5214d;
  (**(code **)(*piStack_32c + 0x88))();
  piStack_338 = *(int **)(param_1 + 0x1dc);
  iStack_330 = param_2 + 0x20;
  pcStack_334 = "Color3";
  ppuStack_33c = (undefined1 **)0xa52167;
  (**(code **)(*piStack_338 + 0x88))();
  iVar4 = *(int *)(param_1 + 0x228);
  pcStack_328 = *(char **)(iVar4 + 0x138);
  iStack_324 = *(int *)(iVar4 + 0x13c);
  piStack_320 = *(int **)(iVar4 + 0x140);
  uStack_2b4 = *(undefined8 *)(iVar4 + 0x13c);
  ppuStack_340 = &puStack_2b8;
  uStack_2ac = CONCAT44(uStack_2ac._4_4_,pcStack_31c);
  ppuStack_344 = (undefined4 **)0xa521b7;
  ppuStack_33c = ppuStack_340;
  puStack_2b8 = pcStack_328;
  D3DXVec3Normalize();
  ppuStack_344 = &puStack_2c0;
  pcStack_348 = "LightDirection";
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0x88))(*(int **)(param_1 + 0x1dc));
  iVar4 = *(int *)(param_1 + 0x228);
  puVar2 = (undefined4 *)(iVar4 + 0xf8);
  puVar7 = &uStack_214;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_2a4 = uStack_210;
  uStack_29c = auStack_208[0];
  piVar8 = *(int **)(param_1 + 0x1dc);
  puVar2 = (undefined4 *)(iVar4 + 0xf8);
  puVar7 = &uStack_214;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_2b4 = uStack_1f0;
  uStack_2ac = uStack_1e8;
  (**(code **)(*piVar8 + 0x88))(piVar8,"LightColor",&uStack_2a4);
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0x88))(*(int **)(param_1 + 0x1dc),"LightAmbient");
  iVar4 = *(int *)(*(int *)(param_1 + 0xe4) + 0x6bc88);
  uVar11 = *(undefined8 *)(iVar4 + 0x114);
  piStack_32c = *(int **)(iVar4 + 0x11c);
  pcStack_334 = (char *)uVar11;
  iStack_330 = (int)((ulonglong)uVar11 >> 0x20);
  pcStack_328 = pcStack_348;
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0x88))
            (*(int **)(param_1 + 0x1dc),"CameraPosition",&pcStack_334);
  piVar8 = *(int **)(param_1 + 0x1dc);
  (**(code **)(*piVar8 + 0xfc))(piVar8,&pcStack_348,0);
  piVar5 = (int *)0x0;
  piVar10 = (int *)0x0;
  if ((int)uVar11 != 0) {
    do {
      uVar9 = (undefined2)((uint)piVar8 >> 0x10);
      (**(code **)(**(int **)(param_1 + 0x1dc) + 0x100))(*(int **)(param_1 + 0x1dc),piVar5);
      (**(code **)(**(int **)(param_1 + 0x1dc) + 0x104))(*(int **)(param_1 + 0x1dc));
      piVar8 = (int *)CONCAT22(uVar9,in_FPUControlWord);
      (*(code *)puStack_2c0[0x52])
                (&puStack_2c0,4,0,0,(int)(longlong)ROUND(*(float *)(param_1 + 0x1d4)),0,
                 (int)(longlong)ROUND(*(float *)(param_1 + 0x1d0)));
      (**(code **)(**(int **)(param_1 + 0x1dc) + 0x108))(*(int **)(param_1 + 0x1dc));
      piVar5 = (int *)((int)piVar5 + 1);
      piVar10 = (int *)uVar11;
    } while (piVar5 < piVar10);
  }
  (**(code **)(**(int **)(param_1 + 0x1dc) + 0x10c))(*(int **)(param_1 + 0x1dc),piVar8);
  (**(code **)(*piVar10 + 0xe4))(piVar10,0x1b,1);
  return;
}

