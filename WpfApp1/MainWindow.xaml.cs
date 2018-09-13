using CPPWRAPPER;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        CLIWrapperClass cli = new CLIWrapperClass();

        public MainWindow()
        {
            InitializeComponent();                        
        }

        private void Get_Click(object sender, RoutedEventArgs e)
        {            
            textBox.Text = cli.GetCLI_var().ToString();
        }

        private void Set_Click(object sender, RoutedEventArgs e)
        {
            cli.SetCLI_var(Int32.Parse(textBox.Text));
        }
    }
}
