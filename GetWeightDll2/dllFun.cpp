�}�D  '  �ݪ������$��x%��J�C$�Yg�t3��~L"`������ߋ�M��_�����e�q�k��C9�	k��"�g�B�u���O���!p��C"�P���Ju��6��0��k��,�')�˲7��;��
D���ju)b��ФwU��B�0��0E��k���ܦuO,C'���iU ����������*c��7��7%�4���5��M%��4k�k$X���-�d7�#6W�]Vd%NwpV�.��6�t��Y4T���;�ݢH����(h�2)w�TO,�����1���E W��=q�l�\j�y�Қ�f�0	�av�ȝ�S��{n���*@٘�E��q�l�%�S�}�+�i���P$͈ 0��%��*��g֎
�Z���4���F��I|�'o���Y�a�w�o��B��{��Iܠ�O�鞰�yG<���/�H�}�,�!Ca���}�<-��Ly������0YX��Y�g���ؙ�' 1)
	{
		cv::flip(Picture, Picture, -1);
	}
	// �������ͼ����������ȡ�����������ֵ
	int AreaLaser = ImgProcess(Picture); // ��ü����ߵ������������ ��λmm^2

	// �ͷ������ڴ�
	RealseMask();
	// ����һ�н��� ʵ��git

	return AreaLaser;

}
