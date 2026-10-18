// FUN_00423990 @ 00423990 body=[[00423990, 00423a49]]


void FUN_00423990(void)

{
  void *_Dst;
  uint *puVar1;
  uint *puVar2;
  uint *in_EAX;
  undefined *puVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  _Dst = (void *)*in_EAX;
  if (_Dst != (void *)in_EAX[1]) {
    FID_conflict__memcpy(_Dst,(void *)in_EAX[1],0);
    in_EAX[1] = (uint)_Dst;
  }
  FUN_004bf300(0x3c);
  local_c = 0;
  puVar3 = &DAT_00f09740;
  do {
    puVar1 = (uint *)in_EAX[1];
    uVar4 = ~-(uint)(0x3b < local_c) & (uint)puVar3;
    local_8 = uVar4;
    if (&local_8 < puVar1) {
      puVar2 = (uint *)*in_EAX;
      if (&local_8 < puVar2) goto LAB_00423a1c;
      if (puVar1 == (uint *)in_EAX[2]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)in_EAX[1] != (undefined4 *)0x0) {
        *(undefined4 *)in_EAX[1] = *(undefined4 *)(*in_EAX + ((int)&local_8 - (int)puVar2 >> 2) * 4)
        ;
      }
    }
    else {
LAB_00423a1c:
      if (puVar1 == (uint *)in_EAX[2]) {
        FUN_00a513f0();
      }
      if ((uint *)in_EAX[1] != (uint *)0x0) {
        *(uint *)in_EAX[1] = uVar4;
      }
    }
    in_EAX[1] = in_EAX[1] + 4;
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x4c;
    if (0xf0a90f < (int)puVar3) {
      return;
    }
  } while( true );
}

