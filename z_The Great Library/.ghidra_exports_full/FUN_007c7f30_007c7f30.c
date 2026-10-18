// FUN_007c7f30 @ 007c7f30 body=[[007c7f30, 007c7f67]]


void FUN_007c7f30(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[2] = DAT_013f1b58;
  in_EAX[1] = CColor::vftable;
  *(undefined8 *)(in_EAX + 3) = DAT_013f1b5c;
  *(undefined8 *)(in_EAX + 5) = DAT_013f1b64;
  *(undefined1 *)(in_EAX + 7) = DAT_013f1b6c;
  return;
}

