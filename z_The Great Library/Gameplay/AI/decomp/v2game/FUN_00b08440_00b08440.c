// FUN_00b08440 @ 00b08440 body=[[00b08440, 00b085c7] [00b085d0, 00b08604]]


void FUN_00b08440(int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00b38fc1;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  uVar5 = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 1;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *(undefined2 *)(in_ECX + 0x16) = 1;
  local_4 = 1;
  uStack_3 = 0;
  FUN_00b088a0(uVar3);
  in_ECX[5] = 0;
  in_ECX[0xd] = 0;
  in_ECX[6] = 0;
  in_ECX[0x23] = param_1;
  in_ECX[9] = 0x3f800000;
  in_ECX[0x28] = 0;
  in_ECX[10] = 0x3f800000;
  in_ECX[0x26] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[7] = 0;
  in_ECX[0x1d] = -1;
  in_ECX[8] = 0x3e99999a;
  in_ECX[0x1c] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x24] = param_2;
  in_ECX[0x20] = param_3;
  in_ECX[0xb] = 0;
  in_ECX[0x21] = -1;
  in_ECX[0xc] = 0;
  in_ECX[0x11] = 0;
  _local_4 = CONCAT31(uStack_3,2);
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x17] = 0x3f800000;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined2 *)(in_ECX + 0x27) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x25] = 0;
  iVar4 = FUN_00b164b0();
  uVar3 = in_ECX[1];
  in_ECX[0x22] = iVar4;
  *(ushort *)(in_ECX + 0x27) = *(ushort *)(in_ECX + 0x27) | 0x2e60;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined2 *)(in_ECX + 3) = 0x133;
  *(undefined2 *)(in_ECX + 0x16) = 300;
  uVar2 = *(uint *)(*(int *)(param_2 + 0x1ac) + 0x84);
  if ((uVar2 != uVar3) && (in_ECX[1] = uVar2, uVar3 < uVar2)) {
    if ((uint)in_ECX[2] < uVar2) {
      FUN_00b08780(uVar2);
    }
    for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      puVar1 = (undefined2 *)(*in_ECX + uVar3 * 2);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0xffff;
      }
    }
  }
  iVar4 = (*(code *)PTR_FUN_00f01b08)(uVar2 * 2,0,4,0,0,0);
  in_ECX[4] = iVar4;
  if (uVar2 != 0) {
    do {
      *(undefined2 *)(in_ECX[4] + uVar5 * 2) = 0xffff;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  FUN_00b08860(in_ECX);
  ExceptionList = local_c;
  return;
}

