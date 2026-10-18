// FUN_00445f40 @ 00445f40 body=[[00445f40, 00445f69]]


void FUN_00445f40(void)

{
  int in_ECX;
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  if (*(int *)(in_ECX + 4) != -1) {
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  FUN_00aad9f1();
  return;
}

