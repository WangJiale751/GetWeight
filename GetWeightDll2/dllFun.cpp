�} D  ,  �0y�'4qA$���%�ފ5�$CHk\t��O]�o*��0idZI�^�Օ(��1��{��}�{���B�cwz�Kh�4���EC656 d���[6��N	~���g���*f�\��
ܩ
�!EK ���O�����(����g��0;M{��aWC����Q�����|�{�&ؕ5}�A�(pXU_6�b��xBǄ�\!f�\&I����EC�uQ����"_	P���=[>p.ɤ H[��4�:�.�MdS�W�.��|����醼�Sgy��a���P��R���&T%��ŭh/K�(K{5���G�l�h�0z
�PV�?��Ҷ��L�L������g���g���lbiqwr8�֑
3��@@�8�FG'���� �J���R���%�9��K\��'o���Y�a�w�o��B��{��Iܠ�O�鞰�yG<���/�H�}�,�!Ca���}�<-��Ly������0YX��Y�g���ؙ�'	cv::flip(Picture, Picture, -1);
	}
	// �Է�ת���ͼ�������ʾ�������ã�
	if (FilpShow == 1)
	{
		cv::namedWindow("FilpImage Showing", CV_WINDOW_NORMAL);
		cv::imshow("FilpImage Showing", Picture);
		cv::waitKey(0);
		cv::destroyAllWindows();
	}
	// �������ͼ����������ȡ�����������ֵ
	int AreaLaser = ImgProcess(Picture); // ��ü����ߵ������������ ��λmm^2

	// �ͷ������ڴ�
	RealseMask();
	// ����һ�н��� ʵ��git

	return AreaLaser;

}
