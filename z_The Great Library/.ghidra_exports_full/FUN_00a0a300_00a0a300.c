// FUN_00a0a300 @ 00a0a300 body=[[00a0a300, 00a0a3d6]]


void FUN_00a0a300(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_2 == 0xe7) {
    puVar2 = (undefined4 *)FUN_00aae9af(0x3c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0xd] = 0xf;
      puVar2[0xc] = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined4 **)(in_ECX + 0x78) = puVar2;
      FUN_009a1550(param_1,puVar2);
      return;
    }
    *(undefined4 *)(in_ECX + 0x78) = 0;
    FUN_009a1550(param_1,0);
  }
  else {
    if (param_2 != 0xf3) {
      if (param_2 == 0xe8) {
        FUN_009a1750(in_ECX + 0x3c,0);
        return;
      }
      if (param_2 != 0xe9) {
        FUN_009a2620(param_1,param_2);
        return;
      }
      FUN_009a1750(in_ECX + 0x58,0);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x74);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

