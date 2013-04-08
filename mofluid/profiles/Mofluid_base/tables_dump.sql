-- phpMyAdmin SQL Dump
-- version 3.4.5
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jun 27, 2012 at 01:23 PM
-- Server version: 5.5.16
-- PHP Version: 5.3.8

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `see_this`
--

-- --------------------------------------------------------

--
-- Table structure for table `blocks`
--

CREATE TABLE IF NOT EXISTS `blocks` (
  `bid` int(11) NOT NULL AUTO_INCREMENT,
  `module` varchar(64) NOT NULL DEFAULT '',
  `delta` varchar(32) NOT NULL DEFAULT '0',
  `theme` varchar(64) NOT NULL DEFAULT '',
  `status` tinyint(4) NOT NULL DEFAULT '0',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  `region` varchar(64) NOT NULL DEFAULT '',
  `custom` tinyint(4) NOT NULL DEFAULT '0',
  `throttle` tinyint(4) NOT NULL DEFAULT '0',
  `visibility` tinyint(4) NOT NULL DEFAULT '0',
  `pages` text NOT NULL,
  `title` varchar(64) NOT NULL DEFAULT '',
  `cache` tinyint(4) NOT NULL DEFAULT '1',
  PRIMARY KEY (`bid`),
  UNIQUE KEY `tmd` (`theme`,`module`,`delta`),
  KEY `list` (`theme`,`status`,`region`,`weight`,`module`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=57 ;

--
-- Dumping data for table `blocks`
--

INSERT INTO `blocks` (`bid`, `module`, `delta`, `theme`, `status`, `weight`, `region`, `custom`, `throttle`, `visibility`, `pages`, `title`, `cache`) VALUES
(1, 'user', '0', 'garland', 1, 0, 'left', 0, 0, 0, '', '', -1),
(2, 'user', '1', 'garland', 1, 0, 'left', 0, 0, 0, '', '', -1),
(3, 'system', '0', 'garland', 1, 10, 'footer', 0, 0, 0, '', '', -1),
(4, 'menu', 'primary-links', 'acquia_prosper', 1, -6, 'footer', 0, 0, 0, '', '', 1),
(5, 'user', '0', 'acquia_prosper', 1, -4, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(6, 'user', '1', 'acquia_prosper', 1, -3, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(7, 'uc_cart', '0', 'acquia_prosper', 1, -5, 'header', 0, 0, 0, 'cart/checkout*', '', 1),
(8, 'uc_catalog', '0', 'acquia_prosper', 1, -5, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(9, 'menu', 'primary-links', 'fusion_core', 1, -5, 'footer', 0, 0, 0, '', '', 1),
(10, 'uc_cart', '0', 'fusion_core', 1, -5, 'header', 0, 0, 0, 'cart/checkout*', '', 1),
(11, 'uc_catalog', '0', 'fusion_core', 1, -5, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(12, 'user', '0', 'fusion_core', 1, -4, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(13, 'user', '1', 'fusion_core', 1, -3, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(14, 'menu', 'primary-links', 'mobile_jquery', 1, -5, 'footer', 0, 0, 0, '', '', -1),
(47, 'mofluid_custom', '0', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', 1),
(46, 'uc_cart', '0', 'mobile_jquery', 1, 0, 'headertop', 0, 0, 0, 'cart/checkout*', '', -1),
(17, 'user', '0', 'mobile_jquery', 1, -4, 'header', 0, 0, 0, 'cart/checkout*', '', -1),
(18, 'user', '1', 'mobile_jquery', 1, -3, 'header', 0, 0, 0, 'cart/checkout*', '', -1),
(19, 'menu', 'primary-links', 'mofluid', 1, -5, 'footer', 0, 0, 0, '', '', 1),
(20, 'uc_cart', '0', 'mofluid', 1, -5, 'header', 0, 0, 0, 'cart/checkout*', '', 1),
(21, 'uc_catalog', '0', 'mofluid', 1, -5, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(22, 'user', '0', 'mofluid', 1, -4, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(23, 'user', '1', 'mofluid', 1, -3, 'sidebar_first', 0, 0, 0, 'cart/checkout*', '', 1),
(24, 'menu', 'secondary-links', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(25, 'node', '0', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(26, 'system', '0', 'mobile_jquery', 0, -6, '', 0, 0, 0, '', '', -1),
(27, 'user', '2', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', 1),
(28, 'user', '3', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(29, 'menu', 'secondary-links', 'acquia_prosper', 0, 0, '', 0, 0, 0, '', '', -1),
(30, 'node', '0', 'acquia_prosper', 0, 0, '', 0, 0, 0, '', '', -1),
(31, 'system', '0', 'acquia_prosper', 0, -6, '', 0, 0, 0, '', '', -1),
(32, 'user', '2', 'acquia_prosper', 0, 0, '', 0, 0, 0, '', '', 1),
(33, 'user', '3', 'acquia_prosper', 0, 0, '', 0, 0, 0, '', '', -1),
(34, 'block', '1', 'acquia_prosper', 1, 0, 'footer', 0, 0, 0, '', '', -1),
(35, 'block', '1', 'fusion_core', 0, 0, '', 0, 0, 0, '', '', -1),
(36, 'block', '1', 'mofluid', 0, 0, '', 0, 0, 0, '', '', -1),
(37, 'block', '1', 'mobile_jquery', 1, 0, 'footer', 0, 0, 0, '', '', -1),
(38, 'image_attach', '0', 'mobile_jquery', 0, 0, '', 0, 0, 1, 'node/*', '', 1),
(39, 'image', '0', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', 1),
(40, 'image', '1', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', 1),
(41, 'views', 'slider-block_1', 'mobile_jquery', 0, 0, '', 0, 0, 1, '<front>', '', -1),
(48, 'search', '0', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(45, 'menu', 'admin_menu', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(53, 'mofluid_custom', '1', 'mobile_jquery', 1, 0, 'banner', 0, 0, 0, '', '', 1),
(54, 'block', '2', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(55, 'block', '3', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1),
(56, 'menu', 'features', 'mobile_jquery', 0, 0, '', 0, 0, 0, '', '', -1);

-- --------------------------------------------------------

--
-- Table structure for table `blocks_roles`
--

CREATE TABLE IF NOT EXISTS `blocks_roles` (
  `module` varchar(64) NOT NULL,
  `delta` varchar(32) NOT NULL,
  `rid` int(10) unsigned NOT NULL,
  PRIMARY KEY (`module`,`delta`,`rid`),
  KEY `rid` (`rid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `blocks_roles`
--

INSERT INTO `blocks_roles` (`module`, `delta`, `rid`) VALUES
('user', '1', 2);

-- --------------------------------------------------------

--
-- Table structure for table `imagecache_action`
--

CREATE TABLE IF NOT EXISTS `imagecache_action` (
  `actionid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `presetid` int(10) unsigned NOT NULL DEFAULT '0',
  `weight` int(11) NOT NULL DEFAULT '0',
  `module` varchar(255) NOT NULL,
  `action` varchar(255) NOT NULL,
  `data` longtext NOT NULL,
  PRIMARY KEY (`actionid`),
  KEY `presetid` (`presetid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `imagecache_action`
--

INSERT INTO `imagecache_action` (`actionid`, `presetid`, `weight`, `module`, `action`, `data`) VALUES
(1, 1, 0, 'imagecache', 'imagecache_scale', 'a:3:{s:5:"width";s:2:"35";s:6:"height";s:2:"35";s:7:"upscale";i:0;}'),
(2, 2, 0, 'imagecache', 'imagecache_resize', 'a:2:{s:5:"width";s:3:"320";s:6:"height";s:3:"155";}'),
(3, 3, 0, 'imagecache', 'imagecache_resize', 'a:2:{s:5:"width";s:3:"393";s:6:"height";s:3:"393";}'),
(4, 4, 0, 'imagecache', 'imagecache_resize', 'a:2:{s:5:"width";s:3:"120";s:6:"height";s:3:"100";}'),
(5, 5, 0, 'imagecache', 'imagecache_resize', 'a:2:{s:5:"width";s:3:"480";s:6:"height";s:3:"200";}');

-- --------------------------------------------------------

--
-- Table structure for table `imagecache_preset`
--

CREATE TABLE IF NOT EXISTS `imagecache_preset` (
  `presetid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `presetname` varchar(255) NOT NULL,
  PRIMARY KEY (`presetid`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `imagecache_preset`
--

INSERT INTO `imagecache_preset` (`presetid`, `presetname`) VALUES
(1, 'uc_thumbnail'),
(2, 'slider'),
(3, 'product-detail'),
(4, 'cart-image'),
(5, 'slider_landscape');

-- --------------------------------------------------------

--
-- Table structure for table `term_data`
--

CREATE TABLE IF NOT EXISTS `term_data` (
  `tid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `vid` int(10) unsigned NOT NULL DEFAULT '0',
  `name` varchar(255) NOT NULL DEFAULT '',
  `description` longtext,
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`tid`),
  KEY `taxonomy_tree` (`vid`,`weight`,`name`),
  KEY `vid_name` (`vid`,`name`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=142 ;

--
-- Dumping data for table `term_data`
--

INSERT INTO `term_data` (`tid`, `vid`, `name`, `description`, `weight`) VALUES
(1, 1, 'Products', '', 0),
(123, 8, 'Sub Category DB4', '', 3),
(8, 3, 'Beige', '', 0),
(9, 3, 'Black', '', 0),
(10, 3, 'brown', '', 0),
(11, 3, 'Grey', '', 0),
(12, 3, 'yellow', '', 0),
(13, 3, 'Red', '', 0),
(119, 5, '+All', '', 13),
(21, 5, 'Adidas', '', 12),
(22, 5, 'Adidas Originals', '', 0),
(23, 5, 'Alpha', '', 1),
(24, 5, 'Angelic', '', 2),
(25, 5, 'Aria', '', 3),
(26, 5, 'Barbie', '', 4),
(27, 5, 'Billabong', '', 5),
(28, 5, 'Bootz Collection', '', 6),
(29, 5, 'Bruman', '', 7),
(30, 5, 'Butterfly Twists', '', 8),
(31, 5, 'Carlton London', '', 9),
(32, 5, 'Catwalk', '', 10),
(33, 5, 'Clarks', '', 11),
(34, 6, 'Senorita', '', 0),
(35, 6, 'Joos', '', 0),
(36, 6, 'Catwalk', '', 0),
(37, 6, 'INC.5', '', 0),
(38, 6, 'Elina', '', 0),
(39, 6, 'Rocia', '', 0),
(40, 6, 'Carlton London', '', 0),
(102, 8, 'Category A', '', 0),
(56, 8, 'Super Category B', '', 11),
(57, 8, 'Super Category A', '', 0),
(58, 8, 'Super Category C', '', 22),
(104, 8, 'Sub Category BA2', '', 1),
(62, 8, 'Sub Category AB1', '', 0),
(63, 8, 'Sub Category AB3', '', 2),
(64, 8, 'Sub Category AA2', '', 1),
(65, 8, 'Sub Category AB4', '', 3),
(103, 8, 'Category B', '', 1),
(100, 8, 'Sub Category AB2', '', 1),
(69, 8, 'Sub Category AA1', '', 0),
(70, 8, 'Sub Category AA4', '', 3),
(72, 8, 'Sub Category BB4', '', 3),
(73, 8, 'Sub Category BA4', '', 3),
(74, 8, 'Sub Category BB1', '', 0),
(76, 8, 'Sub Category BB3', '', 2),
(139, 8, 'Category A', '', 0),
(79, 8, 'Sub Category BA1', '', 0),
(80, 8, 'Sub Category BA3', '', 2),
(81, 8, 'Sub Category BB2', '', 1),
(83, 8, 'Sub Category CB1', '', 0),
(84, 8, 'Sub Category CA2', '', 1),
(85, 8, 'Sub Category CA3', '', 2),
(86, 8, 'Sub Category CA4', '', 3),
(87, 8, 'Category B', '', 1),
(88, 8, 'Sub Category CB2', '', 1),
(95, 8, 'Category A', '', 0),
(96, 8, 'Category B', '', 1),
(97, 8, 'Sub Category AA3', '', 2),
(107, 8, 'Sub Category CA1', '', 0),
(108, 8, 'Super Category D', '', 33),
(109, 8, 'Sub Category DA1', '', 0),
(110, 8, 'Sub Category DA2', '', 1),
(111, 8, 'Sub Category DA3', '', 2),
(112, 8, 'Sub Category DA4', '', 3),
(113, 8, 'Category B', '', 1),
(114, 8, 'Sub Category DB1', '', 0),
(115, 8, 'Sub Category DB2', '', 1),
(116, 8, 'Sub Category DB3', '', 2),
(138, 8, 'Category A', '', 0),
(140, 8, 'Sub Category CB3', '', 2),
(141, 8, 'Sub Category CB4', '', 3);

-- --------------------------------------------------------

--
-- Table structure for table `term_hierarchy`
--

CREATE TABLE IF NOT EXISTS `term_hierarchy` (
  `tid` int(10) unsigned NOT NULL DEFAULT '0',
  `parent` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`tid`,`parent`),
  KEY `parent` (`parent`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `term_hierarchy`
--

INSERT INTO `term_hierarchy` (`tid`, `parent`) VALUES
(1, 0),
(8, 0),
(9, 0),
(10, 0),
(11, 0),
(12, 0),
(13, 0),
(21, 0),
(22, 0),
(23, 0),
(24, 0),
(25, 0),
(26, 0),
(27, 0),
(28, 0),
(29, 0),
(30, 0),
(31, 0),
(32, 0),
(33, 0),
(34, 0),
(35, 0),
(36, 0),
(37, 0),
(38, 0),
(39, 0),
(40, 0),
(56, 0),
(57, 0),
(58, 0),
(62, 96),
(63, 96),
(64, 95),
(65, 96),
(69, 95),
(70, 95),
(72, 103),
(73, 102),
(74, 103),
(76, 103),
(79, 102),
(80, 102),
(81, 103),
(83, 87),
(84, 139),
(85, 139),
(86, 139),
(87, 58),
(88, 87),
(95, 57),
(96, 57),
(97, 95),
(100, 96),
(102, 56),
(103, 56),
(104, 102),
(107, 139),
(108, 0),
(109, 138),
(110, 138),
(111, 138),
(112, 138),
(113, 108),
(114, 113),
(115, 113),
(116, 113),
(119, 0),
(123, 113),
(138, 108),
(139, 58),
(140, 87),
(141, 87);

-- --------------------------------------------------------

--
-- Table structure for table `vocabulary`
--

CREATE TABLE IF NOT EXISTS `vocabulary` (
  `vid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL DEFAULT '',
  `description` longtext,
  `help` varchar(255) NOT NULL DEFAULT '',
  `relations` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `hierarchy` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `multiple` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `required` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `tags` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `module` varchar(255) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`vid`),
  KEY `list` (`weight`,`name`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=12 ;

--
-- Dumping data for table `vocabulary`
--

INSERT INTO `vocabulary` (`vid`, `name`, `description`, `help`, `relations`, `hierarchy`, `multiple`, `required`, `tags`, `module`, `weight`) VALUES
(1, 'Catalog', '', 'Hold Ctrl while clicking to select multiple categories.', 1, 0, 1, 0, 0, 'uc_catalog', -7),
(3, 'Color', 'Color of shoes', '', 1, 0, 1, 0, 0, 'taxonomy', -6),
(5, 'Brands', '', '', 1, 0, 0, 0, 0, 'taxonomy', -9),
(6, 'Product Manufacturer', '', '', 1, 0, 0, 0, 0, 'taxonomy', -8),
(8, 'Product Categories', '', '', 1, 1, 0, 0, 0, 'taxonomy', -10),
(11, 'Image Galleries', NULL, '', 0, 1, 0, 0, 0, 'image_gallery', 0);

-- --------------------------------------------------------

--
-- Table structure for table `vocabulary_node_types`
--

CREATE TABLE IF NOT EXISTS `vocabulary_node_types` (
  `vid` int(10) unsigned NOT NULL DEFAULT '0',
  `type` varchar(32) NOT NULL DEFAULT '',
  PRIMARY KEY (`type`,`vid`),
  KEY `vid` (`vid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Dumping data for table `vocabulary_node_types`
--

INSERT INTO `vocabulary_node_types` (`vid`, `type`) VALUES
(11, 'image'),
(3, 'product'),
(5, 'product'),
(6, 'product'),
(8, 'product'),
(8, 'slider');



/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
