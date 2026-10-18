// FUN_00447a80 @ 00447a80 body=[[00447a80, 00447c34]]


undefined4
FUN_00447a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,double param_6)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  double dVar9;
  uint local_bc;
  char local_b8;
  undefined1 local_b7 [2];
  char local_b5 [5];
  char local_b0 [172];
  
  iVar3 = *(int *)(param_4 + 0x1c);
  uVar5 = *(uint *)(param_4 + 0x18);
  if (iVar3 < 1) {
    if (((iVar3 < 0) || (uVar5 == 0)) && ((*(uint *)(param_4 + 0x14) & 0x2000) == 0)) {
      uVar5 = 6;
      iVar3 = 0;
    }
    local_bc = uVar5;
    if ((iVar3 < 0) || ((iVar3 < 1 && (uVar5 < 0x25)))) goto LAB_00447acb;
  }
  local_bc = 0x24;
LAB_00447acb:
  uVar6 = uVar5 - local_bc;
  iVar3 = (iVar3 - ((int)local_bc >> 0x1f)) - (uint)(uVar5 < local_bc);
  uVar5 = *(uint *)(param_4 + 0x14);
  uVar4 = 0;
  uVar7 = 0;
  dVar9 = param_6;
  if ((uVar5 & 0x3000) == 0x2000) {
    if (param_6 < 0.0) {
      dVar9 = -param_6;
    }
    for (; (1e+35 <= dVar9 && (uVar4 < 5000)); uVar4 = uVar4 + 10) {
      dVar9 = dVar9 / 10000000000.0;
    }
    if ((0.0 < dVar9) && (-1 < iVar3)) {
      if (0 < iVar3) goto LAB_00447b54;
      while (9 < uVar6) {
LAB_00447b54:
        do {
          if ((1e-35 < dVar9) || (4999 < uVar7)) goto LAB_00447b7a;
          bVar8 = 9 < uVar6;
          uVar6 = uVar6 - 10;
          iVar3 = iVar3 + -1 + (uint)bVar8;
          uVar7 = uVar7 + 10;
          dVar9 = dVar9 * 10000000000.0;
        } while (0 < iVar3);
        if (iVar3 < 0) break;
      }
    }
LAB_00447b7a:
    if (param_6 < 0.0) {
      dVar9 = -dVar9;
    }
  }
  local_b8 = '%';
  puVar1 = (undefined2 *)local_b7;
  if ((uVar5 & 0x20) != 0) {
    local_b7[0] = 0x2b;
    puVar1 = (undefined2 *)(local_b7 + 1);
  }
  if ((uVar5 & 0x10) != 0) {
    *(undefined1 *)puVar1 = 0x23;
    puVar1 = (undefined2 *)((int)puVar1 + 1);
  }
  uVar5 = uVar5 & 0x3000;
  *puVar1 = 0x2a2e;
  *(undefined1 *)(puVar1 + 1) = 0x4c;
  if (uVar5 == 0x2000) {
    cVar2 = 'f';
  }
  else if (uVar5 == 0x3000) {
    cVar2 = 'a';
  }
  else {
    cVar2 = (uVar5 != 0x1000) * '\x02' + 'e';
  }
  *(char *)((int)puVar1 + 3) = cVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  iVar3 = _sprintf_s(local_b0,0x6c,&local_b8,local_bc,dVar9,param_2,param_3);
  FUN_00447d70(param_1,param_4,param_5,local_b0,uVar4,uVar7,uVar6,iVar3);
  return param_1;
}

