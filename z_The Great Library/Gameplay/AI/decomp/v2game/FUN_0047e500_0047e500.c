// FUN_0047e500 @ 0047e500 body=[[0047e500, 0047e542]]


void FUN_0047e500(void)

{
  int in_EAX;
  undefined4 *puVar1;
  longlong *unaff_ESI;
  longlong lVar2;
  undefined1 local_10 [12];
  
  puVar1 = (undefined4 *)FUN_005339d0(local_10);
  lVar2 = __allmul(*puVar1,puVar1[1],*(undefined4 *)(in_EAX + 0x1440),
                   *(undefined4 *)(in_EAX + 0x1444));
  *unaff_ESI = lVar2 >> 0xf;
  return;
}

